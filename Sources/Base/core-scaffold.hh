<?hh //strict
class :core-scaffold extends :polymer-xhp{
  protected string $tagName = 'core-scaffold';
  attribute
    Stringish drawerWidth,
    Stringish responsiveWidth,
    bool rightDrawer,
    bool disableSwipe,
    Stringish mode;
  children (pcdata | %flow)*;
  category %flow;
}