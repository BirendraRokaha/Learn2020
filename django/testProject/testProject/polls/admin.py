from django.contrib import admin

from .models import Question, Choice

admin.site.site_header = "F1 Polls"
admin.site.site_title = "F1 Polls Admin"
admin.site.index_title = "F1 Polls - Admin Page"


class ChoiceInLine(admin.TabularInline):
    model = Choice
    extra = 3

class QuestionAdmin(admin.ModelAdmin):
    fieldsets = [(None,{'fields' : ['question_text']}),
    ('Date Information', {'fields' : ['pub_date'], 'classes': ['collapse']}),]
    inlines = [ChoiceInLine]


# admin.site.register(Question)
# admin.site.register(Choice)

admin.site.register(Question, QuestionAdmin)