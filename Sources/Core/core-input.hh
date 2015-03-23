<?hh //strict
class :core-input extends :polymer-xhp{
  protected string $tagName = 'core-input';
  attribute
    Stringish committedValue,
    bool preventInvalidInput;
  children empty;
  category %flow;
}