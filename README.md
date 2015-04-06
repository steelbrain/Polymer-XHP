Polymer-XHP
==========
[Polymer][Polymer] Tags as [XHP][XHP] Classes.

### Usage
 Just require the `Loader.hh` file in your app and use the tags anywhere you like.
For example the markup below is __valid__ [XHP][XHP] markup.

```hack
echo
  <paper-dropdown-menu label="Your favorite pastry">
    <paper-dropdown class="dropdown">
      <core-menu class="menu">
        <paper-item>Croissant</paper-item>
        <paper-item>Donut</paper-item>
        <paper-item>Financier</paper-item>
        <paper-item>Madeleine</paper-item>
      </core-menu>
    </paper-dropdown>
  </paper-dropdown-menu>
```

__Note__: We recommend using the FB's XHP Fork [XHP-Polymer][XHP-Polymer] to use custom Polymer HTML Attribtues in XHP.

#### Supported Elements:
 - All of Paper Elements
 - Core-Dropdown[-Base]
 - Core-Menu
 - Core-Meta
 - Core-Overlay
 - Core-Range
 - Core-Selector
 - Core-Transition[-CSS]

#### License
This project is licensed under the terms of MIT License.

[Polymer]:https://www.polymer-project.org/0.5/docs/start/everything.html
[XHP]:https://github.com/facebook/xhp-lib
[XHP-Polymer]:https://github.com/steelbrain/XHP-Polymer
