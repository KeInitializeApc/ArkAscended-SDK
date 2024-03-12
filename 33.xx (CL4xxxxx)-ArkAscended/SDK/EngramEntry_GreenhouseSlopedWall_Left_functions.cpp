#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GreenhouseSlopedWall_Left.EngramEntry_GreenhouseSlopedWall_Left_C
// (None)

class UClass* UEngramEntry_GreenhouseSlopedWall_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GreenhouseSlopedWall_Left_C");

	return Clss;
}


// EngramEntry_GreenhouseSlopedWall_Left_C EngramEntry_GreenhouseSlopedWall_Left.Default__EngramEntry_GreenhouseSlopedWall_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GreenhouseSlopedWall_Left_C* UEngramEntry_GreenhouseSlopedWall_Left_C::GetDefaultObj()
{
	static class UEngramEntry_GreenhouseSlopedWall_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GreenhouseSlopedWall_Left_C*>(UEngramEntry_GreenhouseSlopedWall_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


