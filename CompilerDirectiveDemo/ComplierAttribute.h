//
//  ComplierAttribute.h
//  CompilerDirectiveDemo
//
//  Created by Jade Tsao on 6/27/16.
//  Copyright © 2016 OFashion. All rights reserved.
//

#ifndef ComplierAttribute_h
#define ComplierAttribute_h

#if defined(__has_attribute)

/**
 int assicNumberWithUppercaseCharacter(char c) ATTR_PARMS_LEGAL((c >= 'A' && c <= 'Z'), "c is out of range");
 */
#if __has_attribute(enable_if)
    #ifndef ATTR_PARMS_LEGAL
        #define ATTR_PARMS_LEGAL(exp, desc) __attribute__((enable_if((exp), desc))) //  参数取值范围做编译检查
    #endif
#endif


#if __has_attribute(objc_runtime_name)
    #ifndef RUNTIME_NAME
        #define RUNTIME_NAME(name) __attribute__((objc_runtime_name(name)))
    #endif
#endif

#if __has_attribute(objc_subclassing_restricted)
    #ifndef FINAL_CLASS
        #define FINAL_CLASS __attribute__((objc_subclassing_restricted))
    #endif
#endif

#endif


#endif /* ComplierAttribute_h */
