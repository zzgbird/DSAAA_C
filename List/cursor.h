#ifndef _Cursor_H

typedef int PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef char ElementType;

void InitializeCursorSpace( void );

List MakeEmpty( List L );
int IsEmpty( const List L );
int IsLast( Position P, const List L );
Position FindPrevious(List L, ElementType x);
Position Find(const List L,  ElementType X);
void Insert( List L, ElementType X, Position P );
void InsertToTail(List L, ElementType X);
void DeleteList( List L );
void Delete(ElementType X, List L);
Position Header( const List L );
Position First( const List L );
Position Advance( const Position P );
ElementType Retrieve( const Position P );
void PrintList(List L);


#endif  /* _Cursor_H */
