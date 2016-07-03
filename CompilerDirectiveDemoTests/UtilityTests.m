//
//  UtilityTests.m
//  CompilerDirectiveDemo
//
//  Created by Jade Tsao on 6/27/16.
//  Copyright © 2016 OFashion. All rights reserved.
//

#import <XCTest/XCTest.h>

#import "Utility.h"

@interface UtilityTests : XCTestCase

@end

@implementation UtilityTests

- (void)setUp {
    [super setUp];
}

- (void)tearDown {
    [super tearDown];
}

- (void)testPerformanceExample {
    [self measureBlock:^{}];
}

- (void)testLowercaseTransform {
    
    int a = assicNumberWithLowercaseCharacter('a');
    XCTAssert(a == 97);
    
    int z = assicNumberWithLowercaseCharacter('z');
    XCTAssert(z == 122);
}

- (void)testUppercaseTransform {
    int a = assicNumberWithUppercaseCharacter('A');
    XCTAssert(a == 65);
    
    int z = assicNumberWithUppercaseCharacter('Z');
    XCTAssert(z == 90);
}


@end
