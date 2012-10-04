//
//  Duck.h
//  Appleduc
//
//  Created by Nick Lupinetti on 10/3/12.
//  Copyright (c) 2012 Nick Lupinetti. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 
 It's important to document the classes themselves. 
     Appledoc will warn you if you don't.
 
 Unordered list:
 
 - Rubber Duckie you’re the one, 
 - You make bathtime lots of fun 
    -Rubber Duckie I’m awfully fond of you
 
 Ordered list:
 
 1. Rubber Duckie, joy of joys
 1. When I squeeze you, you make noise 
 1. Rubber Duckie you’re my very best friend it’s true
 
 Based on research from [Wikipedia](http://en.wikipedia.org/wiki/Duck)
 */

@interface Duck : NSObject

/// Property to check if this is a sitting duck
@property (nonatomic, getter = isSitting) BOOL sitting;

/// Check if this duck looks like a duck.
///
/// Always returns `YES`.
@property (nonatomic, readonly) BOOL looksLikeADuck;

/// Check if this duck walks like a duck.
///
/// Always returns `YES`.
@property (nonatomic, readonly) BOOL walksLikeADuck;

/// Check if this duck talks like a duck.
///
/// Always returns `YES`.
@property (nonatomic, readonly) BOOL talksLikeADuck;

/// Method to make a duck quack
///
/// Wouldn't be much of a duck if it didn't, amirite?
/// @warning If you need the quack to reverberate, you'll need to call this method
/// several times while turning down the volume; Duck quacks don't echo.
/// @bug Sometimes, the duck will bark. See the issue [here](https://www.pivotaltracker.com/story/show/36203507)
- (void)quack;

/** Reports whether this is probably a duck.
 
 Really, you **can** infer this from `looksLikeADuck`, `walksLikeADuck`,
 and `talksLikeADuck` properties. This is called a _convenience_ method.
 
 @param looks Does it look like a duck?
 @param walks Does it walk like a duck?
 @param talks You get the idea 
 @return `YES` if all arguments are `YES`, `NO` otherwise */
+ (BOOL)looksLikeADuck:(BOOL)looks walksLikeADuck:(BOOL)walks talksLikeADuck:(BOOL)talks;

@end
