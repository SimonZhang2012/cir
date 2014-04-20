//
//  ZYXAppDelegate.m
//  CIR1-1-objc
//
//  Created by Yixiang Zhang on 20/04/2014.
//  Copyright (c) 2014 Yixiang Zhang. All rights reserved.
//

#import "ZYXAppDelegate.h"

@implementation ZYXAppDelegate


- (BOOL)isUnique:(const NSString*)aString
{
    const int MAX_CHAR = 256;
    bool table[MAX_CHAR];
    memset(table, 0, sizeof(table)/sizeof(bool));
    
    for (int i= 0; i< aString.length; i++) {
        char c = [aString characterAtIndex:i];
        if (table[c])
            return NO;
        else
            table[c] = 1;
        
    }
    return YES;
}

- (void)testIfUnique:(const NSString*)aString
{
    NSLog(@"testing the string %@ result = %d", aString, [self isUnique:aString]);
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
    [self testIfUnique:@"11111"];
    [self testIfUnique:@"123456"];
    [self testIfUnique:@"12317"];

}

@end
