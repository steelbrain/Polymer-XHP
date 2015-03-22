<?hh //strict
class :paper-icon-button extends :paper-button-base{
  attribute
    Stringish src,
    Stringish icon;
  protected string $tagName = 'paper-icon-button';
}
