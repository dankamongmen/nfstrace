//------------------------------------------------------------------------------
// Author: Dzianis Huznou
// Description: Base analyzer, which implement restoring rpc/nfs structures from plain rpc header.
// Copyright (c) 2013 EPAM Systems. All Rights Reserved.
//------------------------------------------------------------------------------
#ifndef BASE_ANALYZER_H
#define BASE_ANALYZER_H
//------------------------------------------------------------------------------
#include "../filter/nfs/nfs_struct.h"
#include "nfs_data.h"
//------------------------------------------------------------------------------
using namespace NST::filter::NFS3;
//------------------------------------------------------------------------------
namespace NST
{
namespace analyzer
{

class BaseAnalyzer
{
    typedef NFSData::Session Session;
public:
    BaseAnalyzer()
    {
    }
    virtual ~BaseAnalyzer()
    {
    }

    virtual bool call_null      (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_getattr   (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_setattr   (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_lookup    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_access    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_readlink  (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_read      (const Session& session, const ReadArgs& ra) = 0;
    virtual bool call_write     (const Session& session, const WriteArgs& wa) = 0;
    virtual bool call_create    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_mkdir     (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_symlink   (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_mknod     (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_remove    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_rmdir     (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_rename    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_link      (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_readdir   (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_readdirplus(const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_fsstat    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_fsinfo    (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_pathconf  (const Session& session/*, const TypeData& data*/) = 0;
    virtual bool call_commit    (const Session& session/*, const TypeData& data*/) = 0;
};

} // namespace analyzer
} // namespace NST
//------------------------------------------------------------------------------
#endif//BASE_ANALYZER_H
//------------------------------------------------------------------------------