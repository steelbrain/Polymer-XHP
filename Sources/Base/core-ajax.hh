<?hh //strict
class :core-ajax extends :polymer-xhp{
  protected string $tagName = 'core-ajax';
  attribute
    Stringish url,
    Stringish handleAs,
    Stringish auto,
    Stringish params,
    Stringish response,
    Stringish error,
    Stringish loading,
    Stringish progress,
    Stringish method,
    Stringish headers,
    Stringish body,
    Stringish contentType,
    bool withCredentials;
  children empty;
  category %flow;
}