<?hh //strict
class :paper-fab extends :paper-button-base{
  protected string $tagName = 'paper-fab';
  attribute
    Stringish src,
    Stringish icon,
    bool mini;
}