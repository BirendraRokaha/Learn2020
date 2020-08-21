import { Component, OnInit, Input, EventEmitter,Output } from '@angular/core';
import { NoteService } from '../../services/note.service'

import { Notes } from 'src/app/models/Notes';

@Component({
  selector: 'app-note-item',
  templateUrl: './note-item.component.html',
  styleUrls: ['./note-item.component.css']
})
export class NoteItemComponent implements OnInit {
  
  @Input() note:Notes;
  @Output() deleteNote: EventEmitter<Notes> = new EventEmitter();


  constructor(private noteService:NoteService) { }

  ngOnInit(): void {
  }

  // Set Dynamic Classes
  setClasses(){
    let classes = {
      note:true,
      'is-urgent': this.note.urgency
    }

    return classes;
  }

  onToggle(note) {
    // Toggle in UI
    note.urgency = !note.urgency;
    // Toggle on server
    this.noteService.toggleurgency(note).subscribe(note =>
    console.log(note));
  }

  onDelete(note) {
    this.deleteNote.emit(note);
  }
}
