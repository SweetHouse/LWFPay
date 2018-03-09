//
//  MASSConstraint.h
//  MASSonry
//
//  Created by Jonas Budelmann on 20/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASSViewAttribute.h"
#import "MASSConstraint.h"
#import "MASSLayoutConstraint.h"
#import "MASSUtilities.h"

/**
 *  A single constraint.
 *  Contains the attributes neccessary for creating a NSLayoutConstraint and adding it to the appropriate view
 */
@interface MASSViewConstraint : MASSConstraint <NSCopying>

/**
 *	First item/view and first attribute of the NSLayoutConstraint
 */
@property (nonatomic, strong, readonly) MASSViewAttribute *firstViewAttribute;

/**
 *	Second item/view and second attribute of the NSLayoutConstraint
 */
@property (nonatomic, strong, readonly) MASSViewAttribute *secondViewAttribute;

/**
 *	initialises the MASSViewConstraint with the first part of the equation
 *
 *	@param	firstViewAttribute	view.MASS_left, view.MASS_width etc.
 *
 *	@return	a new view constraint
 */
- (id)initWithFirstViewAttribute:(MASSViewAttribute *)firstViewAttribute;

/**
 *  Returns all MASSViewConstraints installed with this view as a first item.
 *
 *  @param  view  A view to retrieve constraints for.
 *
 *  @return An array of MASSViewConstraints.
 */
+ (NSArray *)installedConstraintsForView:(MASS_VIEW *)view;

@end
