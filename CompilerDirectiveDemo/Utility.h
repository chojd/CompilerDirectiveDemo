//
//  Utility.h
//  CompilerDirectiveDemo
//
//  Created by Jade Tsao on 6/27/16.
//  Copyright © 2016 OFashion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ComplierAttribute.h"


#if defined(__has_feature)
    #if !__has_feature(objc_arc)
        #error This file requires automatic reference counting
    #endif
#endif


int assicNumberWithLowercaseCharacter(char c)
__attribute__((enable_if(c >= 'a' && c <= 'z', "'c' is out of range")));

int assicNumberWithUppercaseCharacter(char c) ATTR_PARMS_LEGAL((c >= 'A' && c <= 'Z'), "c is out of range");



NSString * __attribute__((overloadable)) appendingString(NSString *str1, NSString *str2, NSString *str3);
NSString * __attribute__((overloadable)) appendingString(NSString *str1, NSString *str2);




void __attribute__((overloadable)) JT_LOG(NSString *arg);
void __attribute__((overloadable)) JT_LOG(float arg);
void __attribute__((overloadable)) JT_LOG(char *arg);
void __attribute__((overloadable)) JT_LOG(char arg);
void __attribute__((overloadable)) JT_LOG(int arg);


void __attribute((noreturn)) TestNoReturn(int a);