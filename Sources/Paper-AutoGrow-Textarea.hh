<?hh //strict
class :paper-autogrow-textarea extends :div{
  attribute
    Stringish target,
    int rows,
    int maxRows;
  attribute
    Stringish update;
  protected string $tagName = 'paper-autogrow-textarea';
}
