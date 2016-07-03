//
//  FinalObject.h
//  CompilerDirectiveDemo
//
//  Created by Jade Tsao on 6/30/16.
//  Copyright © 2016 OFashion. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ComplierAttribute.h"

__attribute__((objc_subclassing_restricted))
@interface FinalObject : NSObject

@end


FINAL_CLASS @interface Final2Object : NSObject

@end

//@interface TestObject : FinalObject
//
//@end