<?hh //strict
class :paper-progress extends :xhp:html-element{
  attribute
    int secondaryProgress,
    bool indeterminate;
  category %flow, %phrase;
  protected string $tagName = 'paper-progress';
}
