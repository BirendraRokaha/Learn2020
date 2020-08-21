import { Injectable } from '@angular/core';
import { HttpClient, HttpHeaders} from '@angular/common/http';
import { Notes } from '../models/Notes'
import { Observable } from 'rxjs';

const httpOptions = {
  headers: new HttpHeaders({
    'Content-Type': 'application/json'
  })
}

@Injectable({
  providedIn: 'root'
})
export class NoteService {
  notesUrl:string  = 'https://jsonplaceholder.typicode.com/todos';

  notesLimit = '?_limit=15';

  constructor(private http:HttpClient) { }

  //Get Notes  
  getNotes():Observable<Notes[]> {
    return this.http.get <Notes[]>(`${this.notesUrl}${this.notesLimit}`);
  }

  // Delete Notes

  deleteNote(note: Notes):Observable<Notes>{
    const url = `${this.notesUrl}/${note.id}`;
    return this.http.delete<Notes>(url,httpOptions);
  }

  //Toggle completed
  toggleurgency(note: Notes):Observable <any>{
    const url = `${this.notesUrl}/${note.id}`;
    return this.http.put(url, note, httpOptions);
  }
}
