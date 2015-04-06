<?hh
spl_autoload_register(function($Name){
  if(strlen($Name) > 3 && substr($Name, 0, 3) !== 'xhp'){
    return false;
  } else if($Name === 'xhp_polymer_xhp'){
    require_once(__DIR__.'/Sources/Paper/polymer-xhp.hh');
    return false;
  }
  $Chunks = explode('_', $Name);
  $FileName = implode('-', array_slice($Chunks, 2));
  if($Chunks[1] === 'core'){
    $Path = __DIR__.'/Sources/Core/core-'.$FileName.'.hh';
  } else if($Chunks[1] === 'paper'){
    $Path = __DIR__.'/Sources/Paper/paper-'.$Filename.'.hh';
  } else {
    return false;
  }
  file_put_contents("/tmp/test", $Path."\n", FILE_APPEND);
  if(file_exists($Path)){
    require_once($Path);
  }
});
