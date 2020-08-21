import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {HttpClientModule} from '@angular/common/http'

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { NotesComponent } from './components/notes/notes.component';
import { NoteItemComponent } from './components/note-item/note-item.component';
import { HeaderComponent } from './components/layout/header/header.component';
import { AddNotesComponent } from './components/add-notes/add-notes.component';

@NgModule({
  declarations: [
    AppComponent,
    NotesComponent,
    NoteItemComponent,
    HeaderComponent,
    AddNotesComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    HttpClientModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
