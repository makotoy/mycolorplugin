/*

File: MyColorPlugInLoader.m

Abstract: Core Image plugIn loading code.

Version: 1.0

Implements CIPlugInRegistration to be a principal class of Core Image filter bundle.
Derived from Apple's demo code CIDemoImageUnit.
 
*/ 

#import "MyColorPlugInLoader.h"

@implementation MyColorPlugInLoader

-(BOOL)load:(void*)host
{
    // we do nothing at load time
    return YES;
}

@end
