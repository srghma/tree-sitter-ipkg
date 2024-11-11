dest="/home/srghma/projects/tree-sitter-ipkg/test/corpus/realworld/"
declare -A custom_names=(
    ["/home/srghma/projects/idris2-lsp/idris2-lsp.ipkg"]="idris2-lsp-main.txt"
    ["/home/srghma/projects/idris2-lsp/tests/tests.ipkg"]="idris2-lsp-tests.txt"
    ["/home/srghma/projects/idris2-parser/toml/parser-toml.ipkg"]="idris2-toml-parser.txt"
    ["/home/srghma/projects/idris2-parser/toml/test/test.ipkg"]="idris2-toml-test.txt"
    ["/home/srghma/projects/idris2-parser/test/test.ipkg"]="idris2-general-test.txt"
    ["/home/srghma/projects/idris2-parser/parser.ipkg"]="idris2-main-parser.txt"
    ["/home/srghma/projects/idris2-parser/json/test/test.ipkg"]="idris2-json-test.txt"
    ["/home/srghma/projects/idris2-parser/json/parser-json.ipkg"]="idris2-json-parser.txt"
    ["/home/srghma/projects/idris2-parser/webidl/test/test.ipkg"]="idris2-webidl-test.txt"
    ["/home/srghma/projects/idris2-parser/webidl/parser-webidl.ipkg"]="idris2-webidl-parser.txt"
    ["/home/srghma/projects/idris2-parser/tsv/test/test.ipkg"]="idris2-tsv-test.txt"
    ["/home/srghma/projects/idris2-parser/tsv/parser-tsv.ipkg"]="idris2-tsv-parser.txt"
    ["/home/srghma/projects/idris2-parser/docs/docs.ipkg"]="idris2-docs.txt"
    ["/home/srghma/projects/idris2-parser/show/test/test.ipkg"]="idris2-show-test.txt"
    ["/home/srghma/projects/idris2-parser/show/parser-show.ipkg"]="idris2-show-parser.txt"
    ["/home/srghma/projects/optparse-idris/optparse.ipkg"]="optparse-main.txt"
    ["/home/srghma/projects/optparse-idris/test.ipkg"]="optparse-test.txt"
)

mkdir -p "$dest"  # Ensure the destination directory exists

for filepath in "${!custom_names[@]}"; do
    filename="${custom_names[$filepath]}"
    # Write header, separator, and file content to the new file
    {
        echo "============================================"
        echo "${filename%.txt}"
        echo "============================================"
        cat "$filepath"
        echo ""
        echo "------"
    } > "${dest}${filename}"
done
