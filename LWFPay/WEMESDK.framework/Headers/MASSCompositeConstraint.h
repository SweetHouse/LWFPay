//
//  MASSCompositeConstraint.h
//  MASSonry
//
//  Created by Jonas Budelmann on 21/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASSConstraint.h"
#import "MASSUtilities.h"

/**
 *	A group of MASSConstraint objects
 */
@interface MASSCompositeConstraint : MASSConstraint

/**
 *	Creates a composite with a predefined array of children
 *
 *	@param	children	child MASSConstraints
 *
 *	@return	a composite constraint
 */
- (id)initWithChildren:(NSArray *)children;

@end
