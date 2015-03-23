<?hh //strict
class :paper-radio-group extends :core-selector{
  children (:paper-radio-button)*;
  category %flow, %phrase;
  protected string $tagName = 'paper-radio-group';
}
