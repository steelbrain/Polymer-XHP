<?hh //strict
class :core-drawer-panel extends :polymer-xhp{
  protected string $tagName = 'core-drawer-panel';
  attribute
    Stringish drawerWidth,
    Stringish responsiveWidth,
    Stringish selected,
    Stringish defaultSelected,
    bool narrow,
    bool rightDrawer,
    bool disableSwipe,
    bool forceNarrow,
    bool disableEdgeSwipev;
  children (pcdata | %flow)*;
  category %flow;
}