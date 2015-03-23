<?hh //strict
class :paper-toggle-button extends :xhp:html-element{
  attribute
    bool checked,
    bool disabled;
  category %flow, %phrase, %interactive;
  protected string $tagName = 'paper-toggle-button';
}
