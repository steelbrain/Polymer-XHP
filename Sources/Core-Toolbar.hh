<?hh //strict
class :core-toolbar extends :div{
  attribute
    Stringish justify,
    Stringish middleJustify,
    Stringish bottomJustify;
  protected string $tagName = 'core-toolbar';
}
