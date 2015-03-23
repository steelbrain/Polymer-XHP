<?hh //strict
class :paper-input extends :xhp:html-element{
  attribute
    Stringish label,
    bool floatingLabel,
    bool disabled,
    Stringish value,
    Stringish committedValue;
  attribute
    Stringish focus;
  category %flow, %phrase, %interactive;
  protected string $tagName = 'paper-input';
}
