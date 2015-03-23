<?hh //strict
class :paper-slider extends :core-range{
  protected string $tagName = 'paper-slider';
  attribute
    bool snaps,
    bool pin,
    bool disabled,
    int secondaryProgress,
    bool editable,
    int immediateValue,
    bool dragging;
  children empty;
  category %flow;
}