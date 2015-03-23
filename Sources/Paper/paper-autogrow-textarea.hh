<?hh //strict
class :paper-autogrow-textarea extends :polymer-xhp{
  protected string $tagName = 'paper-autogrow-textarea';
  attribute
    Stringish target,
    int rows,
    int maxRows;
  children (pcdata | %flow)*;
  category %flow;
}