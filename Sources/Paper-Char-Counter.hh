<?hh //strict
class :paper-char-counter extends :xhp:html-element{
  attribute
    Stringish target,
    bool showCounter;
  category %flow, %phrase;
  children (pcdata | %phrase)*;
  protected string $tagName = 'paper-char-counter';
}
