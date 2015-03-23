<?hh //strict
class :core-selector extends :xhp:html-element{
  attribute
    Stringish selected,
    bool multi,
    Stringish valueattr,
    Stringish selectedClass,
    Stringish selectedProperty,
    Stringish selectedAttribute,
    Stringish selectedItem,
    Stringish selectedModel,
    int selectedIndex,
    Stringish excludedLocalNames,
    Stringish target,
    Stringish itemsSelector,
    Stringish activateEvent,
    bool notap;
  attribute
    Stringish core-select,
    Stringish core-activate;
  children (pcdata | %flow)*;
  category %flow, %phrase;
  protected string $tagName = 'core-selector';
}
