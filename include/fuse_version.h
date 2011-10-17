/*
 * Copyright (C) 2006-2008 Google. All Rights Reserved.
 * Copyright (C) 2011 Anatol Pomozov. All Rights Reserved.
 */

#ifndef _FUSE_VERSION_H_
#define _FUSE_VERSION_H_

#define FUSE4X_STRINGIFY(s)         FUSE4X_STRINGIFY_BACKEND(s)
#define FUSE4X_STRINGIFY_BACKEND(s) #s

/* Add things here. */

#define FUSE4X_FS_TYPE_LITERAL fuse4x
#define FUSE4X_FS_TYPE         FUSE4X_STRINGIFY(FUSE4X_FS_TYPE_LITERAL)

#define FUSE4X_BUNDLE_IDENTIFIER_LITERAL \
        org.fuse4x.kext.FUSE4X_FS_TYPE_LITERAL
#define FUSE4X_BUNDLE_IDENTIFIER \
        FUSE4X_STRINGIFY(FUSE4X_BUNDLE_IDENTIFIER_LITERAL)

#define FUSE4X_VERSION_LITERAL 0.8.14
#define FUSE4X_VERSION         FUSE4X_STRINGIFY(FUSE4X_VERSION_LITERAL)

#endif /* _FUSE_VERSION_H_ */
