/**
 * @file Utils.h
 * Header file for the Utils (utilities) class.
 *
 * @author Nathan Woltman
 * @copyright 2014-2015 Nathan Woltman
 * @license MIT https://github.com/woollybogger/srt-to-vtt-cl/blob/master/LICENSE.txt
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <fstream>
#include <string>


class Utils
{
public:
	/**
	 * Takes in a wistream and the path to the file the stream was created from
	 * and formats the stream based on the file's encoding.
	 *
	 * @param stream A wifstream that has not bead read yet.
	 */
	static void formatInStream(std::wifstream& stream, const std::string& path);

	/**
	 * Determines if the path is a directory.
	 *
	 * @param path The path string.
	 * @returns TRUE if the path is a directory; else FALSE.
	 */
	static bool isDir(const std::string& path);

	/**
	 * Determines if a path to a file system object such as a file or directory is valid.
	 *
	 * @param path The path string.
	 * @returns TRUE if the path exists; else FALSE.
	 */
	static bool pathExists(const std::string& path);

	/**
	 * Strips characters from the end of a string.
	 *
	 * @param s The input string.
	 * @param c The character to be removed from the end of the string
	 *     (removed continuously until the string no longer ends with this character).
	 * @returns A reference to the input string.
	 */
	static std::string& rtrim(std::string& s, char c);
	static std::wstring& rtrim(std::wstring& s, wchar_t c);

	/**
	 * Replace all occurrences of the search string with the replacement string.
	 *
	 * @param subject The string being searched and replaced on.
	 * @param search The string being searched for to be replaced.
	 * @param replace The replacement string.
	 * @returns A reference to the input string (subject).
	 */
	static std::wstring& wstr_replace(std::wstring& subject, std::wstring search, std::wstring replace);
};

#endif
