//
//  Utility.m
//  CompilerDirectiveDemo
//
//  Created by Jade Tsao on 6/27/16.
//  Copyright © 2016 OFashion. All rights reserved.
//

#import "Utility.h"

int assicNumberWithLowercaseCharacter(char c) {
    return c - 0;
}

int assicNumberWithUppercaseCharacter(char c) {
    return c - 0;
}

NSString * __attribute__((overloadable)) appendingString(NSString *str1, NSString *str2, NSString *str3) {
    if (!str1 || !str2 || !str3) {
        return nil;
    }
    return [[str1 stringByAppendingString:str2] stringByAppendingString:str3];
}

NSString * __attribute__((overloadable)) appendingString(NSString *str1, NSString *str2) {
    if (!str1 || !str2) {
        return nil;
    }
    return [str1 stringByAppendingString:str2];
}


void __attribute__((overloadable)) JT_LOG(NSString *arg) {
    NSLog(@"%@", arg);
}

void __attribute__((overloadable)) JT_LOG(char *arg)  {
    NSLog(@"%s", arg);
}

void __attribute__((overloadable)) JT_LOG(float arg) {
    NSLog(@"%f", arg);
}

void __attribute__((overloadable)) JT_LOG(char arg) {
    NSLog(@"%c", arg);
}

void __attribute__((overloadable)) JT_LOG(int arg) {
    NSLog(@"%d", arg);
}

void __attribute__((noreturn)) TestNoReturn(int a) {
    return;
}
