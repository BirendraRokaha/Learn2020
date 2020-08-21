import { Component, OnInit } from '@angular/core';
import { NoteService} from '../../services/note.service';
import { Notes } from '../../models/Notes';

@Component({
  selector: 'app-notes',
  templateUrl: './notes.component.html',
  styleUrls: ['./notes.component.css']
})
export class NotesComponent implements OnInit {

  notes:Notes[];

  constructor(private noteService:NoteService) {}

  ngOnInit(): void {
    this.noteService.getNotes().subscribe(notes => {
      this.notes = notes;
    });
  }
  deleteNote(note:Notes) {
    //Remove form UI
    this.notes = this.notes.filter(n => n.id !== note.id);
    //Remove from server
    this.noteService.deleteNote(note).subscribe();
  }
}