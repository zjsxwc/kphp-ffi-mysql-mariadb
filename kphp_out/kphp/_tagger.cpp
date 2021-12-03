//crc64:baee6d46737f8097
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"

template<>
int Storage::tagger<Optional < array< mixed > >>::get_tag()  noexcept {
  return -1717182174;
}

template<>
int Storage::tagger<Optional < int64_t >>::get_tag()  noexcept {
  return 1625745680;
}

template<>
int Storage::tagger<Optional < string >>::get_tag()  noexcept {
  return 461523112;
}

template<>
int Storage::tagger<array< array< mixed > >>::get_tag()  noexcept {
  return -2043716967;
}

template<>
int Storage::tagger<array< class_instance<C$VK$TL$RpcResponse> >>::get_tag()  noexcept {
  return -100587552;
}

template<>
int Storage::tagger<array< mixed >>::get_tag()  noexcept {
  return 818704257;
}

template<>
int Storage::tagger<bool>::get_tag()  noexcept {
  return 2066206666;
}

template<>
int Storage::tagger<class_instance<C$KphpJobWorkerResponse>>::get_tag()  noexcept {
  return 158135432;
}

template<>
int Storage::tagger<class_instance<C$VK$TL$RpcResponse>>::get_tag()  noexcept {
  return -1349254353;
}

template<>
int Storage::tagger<int64_t>::get_tag()  noexcept {
  return 308909271;
}

template<>
int Storage::tagger<mixed>::get_tag()  noexcept {
  return 2003848354;
}

template<>
int Storage::tagger<thrown_exception>::get_tag()  noexcept {
  return 1251598724;
}

template<>
int Storage::tagger<void>::get_tag()  noexcept {
  return -500457828;
}

template<typename T>
typename Storage::loader<T>::loader_fun Storage::loader<T>::get_function(int tag) noexcept {
  switch(tag){
    case -2043716967: return Storage::load_implementation_helper<array< array< mixed > >, T>::load;
    case -1717182174: return Storage::load_implementation_helper<Optional < array< mixed > >, T>::load;
    case -1349254353: return Storage::load_implementation_helper<class_instance<C$VK$TL$RpcResponse>, T>::load;
    case -500457828: return Storage::load_implementation_helper<void, T>::load;
    case -100587552: return Storage::load_implementation_helper<array< class_instance<C$VK$TL$RpcResponse> >, T>::load;
    case 158135432: return Storage::load_implementation_helper<class_instance<C$KphpJobWorkerResponse>, T>::load;
    case 308909271: return Storage::load_implementation_helper<int64_t, T>::load;
    case 461523112: return Storage::load_implementation_helper<Optional < string >, T>::load;
    case 818704257: return Storage::load_implementation_helper<array< mixed >, T>::load;
    case 1251598724: return Storage::load_implementation_helper<thrown_exception, T>::load;
    case 1625745680: return Storage::load_implementation_helper<Optional < int64_t >, T>::load;
    case 2003848354: return Storage::load_implementation_helper<mixed, T>::load;
    case 2066206666: return Storage::load_implementation_helper<bool, T>::load;
  }
  php_assert(0);
}

