<?hh //strict
class :core-image extends :polymer-xhp{
  protected string $tagName = 'core-image';
  attribute
    Stringish src,
    bool load,
    Stringish sizing,
    Stringish position,
    bool preload,
    Stringish placeholder,
    bool fade,
    bool loading,
    int width,
    int height;
  children empty;
  category %flow;
}