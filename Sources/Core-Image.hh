<?hh //strict
class :core-image extends :xhp:html-element{
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
  category %flow, %phrase;
  protected string $tagName = 'core-image';
}
