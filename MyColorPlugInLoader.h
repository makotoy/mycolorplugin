/*

File: MyColorPlugInLoader.h

Abstract: Core Image PlugIn loading code.
 
Version: 1.0

Implements CIPlugInRegistration to be a principal class of Core Image filter bundle.
 Derived from Apple's demo code CIDemoImageUnit, with a change to the framework reference.

*/ 


#import <Foundation/Foundation.h>
#import <CoreImage/CoreImage.h>


@interface MyColorPlugInLoader : NSObject <CIPlugInRegistration>
{

}

-(BOOL)load:(void*)host;

@end
