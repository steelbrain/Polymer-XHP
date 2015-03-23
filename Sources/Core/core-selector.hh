<?hh //strict
class :core-selector extends :polymer-xhp{
  protected string $tagName = 'core-selector';
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
  children (pcdata | %flow)*;
  category %flow;
}