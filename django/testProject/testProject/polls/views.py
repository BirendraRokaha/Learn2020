from django.shortcuts import render
from django.shortcuts import get_list_or_404, get_object_or_404
from django.http import HttpResponse,HttpResponseRedirect
from django.urls import reverse

from .models import Question,Choice

# Get Questions and display them
def index(request):
    latest_question_list = Question.objects.order_by('-pub_date')[:5]
    context = {'latest_question_list':latest_question_list}
    return render(request, 'polls/index.html', context)


# Show specific question and choices
def detail(request, question_id):
    try:
        question = Question.objects.get(pk=question_id)
    except Question.DoesNotExist:
        raise Http404("Question doesnot exist")
    return render(request, 'polls/detail.html', {'question': question})

#  Get question adn display result

def results(request, question_id):
    question = get_object_or_404(Question, pk = question_id)
    return render(request, 'polls/results.html', {'question': question})

# vote for a question
def vote(request, question_id):
    # print(request.POST['choice])
    question = get_object_or_404(Question, pk=question_id)
    try:
        selected_choice = question.choice_set.get(pk =request.POST['choice'])
    except (KeyError, Choice.DoesNotExist):
        # render the question voting form.
        return render(request, 'polls/detail.html', {
            'question':question,
            'error_message': "You havent' selected a choice.",
        })
    else:
        selected_choice.votes += 1
        selected_choice.save()
        # always return HttpResponseRedirect
        return HttpResponseRedirect(reverse('polls:results', args= (question.id,)))