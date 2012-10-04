//
//  DuckViewController.h
//  Appleduc
//
//  Created by Nick Lupinetti on 10/3/12.
//  Copyright (c) 2012 Nick Lupinetti. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 
 If you need to control views that have a Duck or two, you wanna use this.
 */

@interface DuckViewController : UIViewController

/// An array that contains the row of ducks.
///
/// This is not a duck-heavy app, so it's not very important to keep our ducks all in a row.
/// Therefore, use this list reluctantly. Listlessly, even.
@property (nonatomic, retain) NSArray* rowOfDucks;

/// PETA opposes both cockfights and duck rows
@property (nonatomic, retain) NSArray* duckRow;

/**
 This is a handy method for keeping children entertained.
 
 The kids might even get a little exercise. Except for the ugly
 one nobody wants to touch.
 
 It's probably worth throwing in a [Duck quack] for good measure.
 
 @param duck1 Pat this duck on the head
 @param duck2 Pat this duck on the head also
 @param goose RUN BITCH RUN
 */
- (void)duck:(id)duck1 duck:(id)duck2 goose:(id)goose;

/*! Test to see if what's good for goose is good for gander.
 
 This method uses some hardcore algorithms, or maybe
 nursery rhymes. Unclear.
 @param food Object to test against goose and gander
 @return whether the saying holds true
 @exception NSInvalidArgumentException Raises an exception if `food` is not a food*/
+ (BOOL)isWhatsGoodForGooseAlsoGoodForGander:(id)food;

@end
