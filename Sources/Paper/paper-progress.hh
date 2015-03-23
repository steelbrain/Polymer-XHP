<?hh //strict
class :paper-progress extends :core-range{
  protected string $tagName = 'paper-progress';
  attribute
    int secondaryProgress,
    bool indeterminate;
  children (pcdata | %flow)*;
  category %flow;
}