<?hh //strict
class :paper-fab extends :paper-button-base{
  attribute
    Stringish src,
    Stringish icon,
    bool mini;
  protected string $tagName = 'paper-tag';
}
