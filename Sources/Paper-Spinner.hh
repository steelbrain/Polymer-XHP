<?hh //strict
class :paper-spinner extends :xhp:html-element{
  attribute
    bool active,
    string alt;
  category %flow, %phrase;
  protected string $tagName = 'paper-spinner';
}
