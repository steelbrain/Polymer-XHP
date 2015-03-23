<?hh //strict
class :paper-slider extends :core-range{
  attribute
    bool snaps,
    bool pin,
    bool disabled,
    int secondaryProgress,
    bool editable,
    int immediateValue,
    bool dragging;
  protected string $tagName = 'paper-slider';
}
