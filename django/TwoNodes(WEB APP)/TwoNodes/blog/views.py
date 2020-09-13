from django.shortcuts import render
# from django.http import HttpResponse  no longer needed
from django.views.generic import ListView,DetailView
from .models import Post

'''
Dummy Data
posts = [
    {
        'author':'John Smith',
        'title':'First post',
        'content':'Good to have account with TwoNodes',
        'datePosted':'9 September 2020'
    },
    {
        'author':'Johan Appleased',
        'title':'Second post',
        'content':'Two nodes is the next TwoNodes',
        'datePosted':'10 September 2020'
    },
        {
        'author':'John Smith',
        'title':'First post',
        'content':'Good to have account with TwoNodes',
        'datePosted':'9 September 2020'
    },    {
        'author':'John Smith',
        'title':'First post',
        'content':'Good to have account with TwoNodes',
        'datePosted':'9 September 2020'
    },    {
        'author':'John Smith',
        'title':'First post',
        'content':'Good to have account with TwoNodes',
        'datePosted':'9 September 2020'
    },    {
        'author':'John Smith',
        'title':'First post',
        'content':'Good to have account with TwoNodes',
        'datePosted':'9 September 2020'
    }
]
'''

def home(request):
    context = {
        'posts': Post.objects.all()
    }
    return render(request, 'blog/home.html', context)

class PostListView(ListView):
    model = Post
    template_name = 'blog/home.html'
    context_object_name = 'posts'
    ordering = ['-dateposted']

class PostDetailView(DetailView):
    model = Post

def about(request):
    return render(request, 'blog/about.html',{'title':'About Us.'})


# Dummy request
# def contact(request):
#     return HttpResponse('<h1 style="color: 	#B8860B; text-align: center;">Contact us.</h1>')

