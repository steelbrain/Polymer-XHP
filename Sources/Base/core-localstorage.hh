<?hh //strict
class :core-localstorage extends :polymer-xhp{
  protected string $tagName = 'core-localstorage';
  attribute
    Stringish name,
    Stringish value,
    bool useRaw,
    bool autoSaveDisabled;
  children empty;
  category %flow;
}