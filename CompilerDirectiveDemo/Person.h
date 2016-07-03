//
//  Person.h
//  CompilerDirectiveDemo
//
//  Created by Jade Tsao on 6/27/16.
//  Copyright © 2016 OFashion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ComplierAttribute.h"

@protocol PersonProtocol;
RUNTIME_NAME("AttributePerson") @interface Person : NSObject


@end

@protocol PersonProtocol <NSObject>

@end