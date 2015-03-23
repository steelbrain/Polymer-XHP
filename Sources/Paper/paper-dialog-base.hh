<?hh //strict
class :paper-dialog-base extends :core-overlay{
  protected string $tagName = 'paper-dialog-base';
  attribute
    Stringish heading,
    Stringish transition,
    bool layered;
}