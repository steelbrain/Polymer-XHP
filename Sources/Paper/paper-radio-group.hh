<?hh //strict
class :paper-radio-group extends :core-selector{
  protected string $tagName = 'paper-radio-group';
  children(:paper-radio-button | :paper-radio)*;
}