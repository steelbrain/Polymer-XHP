<?hh //strict
class :core-range extends :xhp:html-element{
  attribute
    int value,
    int min,
    int max,
    int step,
    int ratio;
  category %flow, %phrase, %interactive;
  protected string $tagName = 'core-range';
}
